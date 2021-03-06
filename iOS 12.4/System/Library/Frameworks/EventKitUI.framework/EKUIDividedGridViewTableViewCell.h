/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class EKUIDividedGridViewController, UIView;

@interface EKUIDividedGridViewTableViewCell : UITableViewCell {

	EKUIDividedGridViewController* _gridViewController;
	UIView* _topDivider;
	UIView* _bottomDivider;

}

@property (retain) EKUIDividedGridViewController * gridViewController;              //@synthesize gridViewController=_gridViewController - In the implementation block
@property (nonatomic,retain) UIView * topDivider;                                   //@synthesize topDivider=_topDivider - In the implementation block
@property (nonatomic,retain) UIView * bottomDivider;                                //@synthesize bottomDivider=_bottomDivider - In the implementation block
@property (assign,nonatomic) BOOL drawsTopDivider; 
-(void)setDrawsTopDivider:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 gridViewType:(long long)arg3 buttonTitles:(id)arg4 cellBackgroundColor:(id)arg5 ;
-(BOOL)wantsDrawBackground;
-(void)setTopDivider:(UIView *)arg1 ;
-(void)setBottomDivider:(UIView *)arg1 ;
-(BOOL)_isWiderThanMaximum;
-(void)setDrawBottomDivider:(BOOL)arg1 ;
-(UIView *)topDivider;
-(BOOL)drawBottomDivider;
-(BOOL)drawsTopDivider;
-(EKUIDividedGridViewController *)gridViewController;
-(UIView *)bottomDivider;
-(void)layoutSubviews;
-(CGRect)_separatorFrame;
-(void)setGridViewController:(EKUIDividedGridViewController *)arg1 ;
@end

