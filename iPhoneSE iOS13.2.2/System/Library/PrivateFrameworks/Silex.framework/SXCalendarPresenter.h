/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EKEventEditViewDelegate.h>
#import <libobjc.A.dylib/SXCalendarPresenter.h>

@protocol SXCalendarPresenter <NSObject>
@required
-(void)presentCalendarEvent:(id)arg1;

@end


@protocol SXViewControllerPresenting;
@class SXEventStoreProvider, NSString;

@interface SXCalendarPresenter : NSObject <EKEventEditViewDelegate, SXCalendarPresenter> {

	id<SXViewControllerPresenting> _viewControllerPresenting;
	SXEventStoreProvider* _eventStoreProvider;

}

@property (nonatomic,readonly) id<SXViewControllerPresenting> viewControllerPresenting;              //@synthesize viewControllerPresenting=_viewControllerPresenting - In the implementation block
@property (nonatomic,readonly) SXEventStoreProvider * eventStoreProvider;                            //@synthesize eventStoreProvider=_eventStoreProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(SXEventStoreProvider *)eventStoreProvider;
-(id<SXViewControllerPresenting>)viewControllerPresenting;
-(void)presentCalendarEvent:(id)arg1 ;
-(id)initWithViewControllerPresenting:(id)arg1 eventStoreProvider:(id)arg2 ;
@end

