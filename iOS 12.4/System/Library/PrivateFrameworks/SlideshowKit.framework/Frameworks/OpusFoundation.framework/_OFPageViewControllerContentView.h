/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <OpusFoundation/OFUIView.h>

@class UIPageControl;

@interface _OFPageViewControllerContentView : OFUIView {

	UIPageControl* _pageControl;

}

@property (nonatomic,readonly) UIPageControl * pageControl;              //@synthesize pageControl=_pageControl - In the implementation block
+(Class)layerClass;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(void)_setupPageControl:(id)arg1 ;
-(void)invalidatePageViewController;
-(UIPageControl *)pageControl;
@end

