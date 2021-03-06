/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIScrollView.h>

@protocol NUPageViewControllerScrollViewAccessibilityDelegate;
@interface NUPageViewControllerScrollView : UIScrollView {

	id<NUPageViewControllerScrollViewAccessibilityDelegate> _accessibilityDelegate;

}

@property (assign,nonatomic,__weak) id<NUPageViewControllerScrollViewAccessibilityDelegate> accessibilityDelegate;              //@synthesize accessibilityDelegate=_accessibilityDelegate - In the implementation block
-(id<NUPageViewControllerScrollViewAccessibilityDelegate>)accessibilityDelegate;
-(void)setAccessibilityDelegate:(id<NUPageViewControllerScrollViewAccessibilityDelegate>)arg1 ;
-(BOOL)accessibilityScroll:(long long)arg1 ;
@end

