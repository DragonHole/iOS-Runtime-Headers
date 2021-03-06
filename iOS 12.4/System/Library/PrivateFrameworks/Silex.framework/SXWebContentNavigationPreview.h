/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXWebContentNavigationHandler;
@class UIViewController, NSURLRequest;

@interface SXWebContentNavigationPreview : NSObject {

	UIViewController* _viewController;
	id<SXWebContentNavigationHandler> _navigationHandler;
	NSURLRequest* _request;

}

@property (nonatomic,__weak,readonly) UIViewController * viewController;                         //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) id<SXWebContentNavigationHandler> navigationHandler;              //@synthesize navigationHandler=_navigationHandler - In the implementation block
@property (nonatomic,readonly) NSURLRequest * request;                                           //@synthesize request=_request - In the implementation block
-(id)initWithViewController:(id)arg1 navigationHandler:(id)arg2 URLRequest:(id)arg3 ;
-(id<SXWebContentNavigationHandler>)navigationHandler;
-(UIViewController *)viewController;
-(NSURLRequest *)request;
@end

