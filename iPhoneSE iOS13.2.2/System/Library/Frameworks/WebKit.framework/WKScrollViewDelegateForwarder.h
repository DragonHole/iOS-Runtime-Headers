/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:02 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIScrollViewDelegate.h>

@class WKWebView, NSString;

@interface WKScrollViewDelegateForwarder : NSObject <UIScrollViewDelegate> {

	WKWebView* _internalDelegate;
	WeakObjCPtr<id<UIScrollViewDelegate> > _externalDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)initWithInternalDelegate:(id)arg1 externalDelegate:(id)arg2 ;
@end
