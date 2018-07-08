//
//  AdsView.h
//  AdsView
//
//  Created by Superman on 2018/7/8.
//  Copyright © 2018年 Superman. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AdsContainerView : UIView<UIScrollViewDelegate>
@property (strong, nonatomic) NSArray *containtViews;
@property (nonatomic,copy)void (^scrollViewIndex)(long index);
@end

@interface AdsCloseButton : UIButton
/**关闭按钮前景色*/
@property (nonatomic,retain)UIColor *closeButtonTintColor;
@end
# pragma mark------主视图

@class AdsView;

@protocol AdsViewDelegate <NSObject>
@optional
/**
 *  广告弹框视图已经出现
 *
 *  @param view 弹框视图
 */
- (void)AdsViewDidAppear:(AdsView *)view;
/**
 *  广告弹框视图已经消失
 *
 *  @param view 弹框视图
 */
- (void)AdsViewDidDisAppear:(AdsView *)view;
/**
 *  点击主内容视图
 *
 *  @param view 弹框视图
 *  @param selectIndex 当前选中索引
 */
- (void)AdsViewTapMainContainView:(AdsView *)view
                 currentSelectIndex:(long)selectIndex;

@end



@interface AdsView : UIView
{
    long _selectIndex;//当前索引值
}
/**内容视图数组*/
@property (nonatomic,retain) NSArray *containerSubviews;
/**主内容视图*/
@property (nonatomic,retain) AdsContainerView *mainContainView;
/**关闭按钮*/
@property (nonatomic,retain) AdsCloseButton *closeButton;
@property (nonatomic,retain) UIView *lineView;//直线
/**水平边距*/
@property (nonatomic,assign) float minHorizontalPadding;
/**垂直边距*/
@property (nonatomic,assign) float minVertalPadding;
/**宽高比例*/
@property (nonatomic,assign) float proportion;

@property (nonatomic,weak) id <AdsViewDelegate> delegate;

- (instancetype)initWithView:(UIView *)view;
- (instancetype)initWithWindow:(UIWindow *)window;
- (void)showAnimated:(BOOL)animated;
- (void)hideAnimated:(BOOL)animated;


@end
