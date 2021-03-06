/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@class HUQuickControlViewController, HUQuickControlCollectionViewCellContainerView;

@interface HUQuickControlCollectionViewCellContainerViewController : UIViewController {

	unsigned long long _titlePosition;
	HUQuickControlViewController* _contentViewController;
	UIEdgeInsets _preferredContentLayoutFrameInset;

}

@property (nonatomic,retain) HUQuickControlCollectionViewCellContainerView * view; 
@property (nonatomic,readonly) HUQuickControlCollectionViewCellContainerView * viewIfLoaded; 
@property (assign,nonatomic) unsigned long long titlePosition;                                            //@synthesize titlePosition=_titlePosition - In the implementation block
@property (assign,nonatomic) UIEdgeInsets preferredContentLayoutFrameInset;                               //@synthesize preferredContentLayoutFrameInset=_preferredContentLayoutFrameInset - In the implementation block
@property (nonatomic,readonly) HUQuickControlViewController * contentViewController;                      //@synthesize contentViewController=_contentViewController - In the implementation block
+(id)intrinsicSizeDescriptorControlSizeDescriptor:(id)arg1 titlePosition:(unsigned long long)arg2 ;
-(void)setTitlePosition:(unsigned long long)arg1 ;
-(unsigned long long)titlePosition;
-(id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1 ;
-(void)setPreferredContentLayoutFrameInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)preferredContentLayoutFrameInset;
-(void)setTitle:(id)arg1 ;
-(id)initWithContentViewController:(id)arg1 ;
-(void)loadView;
-(HUQuickControlViewController *)contentViewController;
@end

