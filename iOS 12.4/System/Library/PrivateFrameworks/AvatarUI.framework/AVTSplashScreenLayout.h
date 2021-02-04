/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVTSplashScreenLayoutDelegate;
#import <AvatarUI/AvatarUI-Structs.h>
@class NSString;

@interface AVTSplashScreenLayout : NSObject {

	BOOL _wantsSecondaryVideo;
	BOOL _needsLayout;
	id<AVTSplashScreenLayoutDelegate> _delegate;
	unsigned long long _labelEdgePaddingStyle;
	NSString* _currentContentSizeCategory;
	CGSize _containerSize;
	UIEdgeInsets _edgeInsets;
	CGRect _titleFrame;
	CGRect _subTitleFrame;
	CGRect _primaryVideoFrame;
	CGRect _secondaryVideoFrame;
	CGRect _buttonFrame;

}

@property (assign,nonatomic) BOOL wantsSecondaryVideo;                                       //@synthesize wantsSecondaryVideo=_wantsSecondaryVideo - In the implementation block
@property (assign,nonatomic) CGRect titleFrame;                                              //@synthesize titleFrame=_titleFrame - In the implementation block
@property (assign,nonatomic) CGRect subTitleFrame;                                           //@synthesize subTitleFrame=_subTitleFrame - In the implementation block
@property (assign,nonatomic) CGRect primaryVideoFrame;                                       //@synthesize primaryVideoFrame=_primaryVideoFrame - In the implementation block
@property (assign,nonatomic) CGRect secondaryVideoFrame;                                     //@synthesize secondaryVideoFrame=_secondaryVideoFrame - In the implementation block
@property (assign,nonatomic) CGRect buttonFrame;                                             //@synthesize buttonFrame=_buttonFrame - In the implementation block
@property (nonatomic,copy) NSString * currentContentSizeCategory;                            //@synthesize currentContentSizeCategory=_currentContentSizeCategory - In the implementation block
@property (assign,nonatomic) BOOL needsLayout;                                               //@synthesize needsLayout=_needsLayout - In the implementation block
@property (assign,nonatomic,__weak) id<AVTSplashScreenLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGSize containerSize;                                         //@synthesize containerSize=_containerSize - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets edgeInsets;                                      //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,readonly) unsigned long long labelEdgePaddingStyle;                     //@synthesize labelEdgePaddingStyle=_labelEdgePaddingStyle - In the implementation block
+(id)buttonFont;
+(id)subTitleFont;
+(id)blueButton;
+(unsigned long long)appropriateLabelEdgePaddingStyleForViewSize:(CGSize)arg1 ;
+(CGRect)buttonFrameForString:(id)arg1 containerSize:(CGSize)arg2 edgeInsets:(UIEdgeInsets)arg3 ;
+(double)defaultLabelEdgePaddingForLabelEdgePaddingStyle:(unsigned long long)arg1 contentSizeCategory:(id)arg2 numberOfLines:(long long)arg3 ;
+(CGRect)titleFrameForString:(id)arg1 yOrigin:(double)arg2 containerSize:(CGSize)arg3 labelEdgePadding:(double)arg4 ;
+(CGRect)subTitleFrameForString:(id)arg1 titleFrame:(CGRect)arg2 buttonFrame:(CGRect)arg3 wantsSecondaryVideo:(BOOL)arg4 containerSize:(CGSize)arg5 labelEdgePadding:(double)arg6 ;
+(CGRect)primaryVideoFrameForContentFrame:(CGRect)arg1 wantsSecondaryVideo:(BOOL)arg2 ;
+(CGRect)secondaryVideoFrameForContentFrame:(CGRect)arg1 ;
+(id)titleFont;
-(CGRect)buttonFrame;
-(void)setButtonFrame:(CGRect)arg1 ;
-(CGSize)containerSize;
-(id)initWithContainerSize:(CGSize)arg1 edgeInsets:(UIEdgeInsets)arg2 wantsSecondaryVideo:(BOOL)arg3 labelEdgePaddingStyle:(unsigned long long)arg4 ;
-(void)calculateLayoutWithTitleString:(id)arg1 subTitleString:(id)arg2 buttonTitle:(id)arg3 ;
-(CGRect)titleFrame;
-(CGRect)subTitleFrame;
-(CGRect)primaryVideoFrame;
-(CGRect)secondaryVideoFrame;
-(id)initWithContainerSize:(CGSize)arg1 edgeInsets:(UIEdgeInsets)arg2 wantsSecondaryVideo:(BOOL)arg3 labelEdgePaddingStyle:(unsigned long long)arg4 currentContentSizeCategory:(id)arg5 ;
-(void)didChangeContentSizeCategory:(id)arg1 ;
-(unsigned long long)labelEdgePaddingStyle;
-(NSString *)currentContentSizeCategory;
-(BOOL)wantsSecondaryVideo;
-(void)setTitleFrame:(CGRect)arg1 ;
-(void)setSubTitleFrame:(CGRect)arg1 ;
-(void)setPrimaryVideoFrame:(CGRect)arg1 ;
-(void)setSecondaryVideoFrame:(CGRect)arg1 ;
-(void)setCurrentContentSizeCategory:(NSString *)arg1 ;
-(void)setWantsSecondaryVideo:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setDelegate:(id<AVTSplashScreenLayoutDelegate>)arg1 ;
-(id<AVTSplashScreenLayoutDelegate>)delegate;
-(UIEdgeInsets)edgeInsets;
-(BOOL)needsLayout;
-(void)setNeedsLayout:(BOOL)arg1 ;
@end
