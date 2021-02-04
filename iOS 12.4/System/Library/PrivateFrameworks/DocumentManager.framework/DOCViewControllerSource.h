/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManager/DOCDocumentSource.h>

@protocol DOCSourceViewControllerProviding;
@class UIViewController;

@interface DOCViewControllerSource : DOCDocumentSource {

	id<DOCSourceViewControllerProviding> _provider;
	UIViewController* _viewController;

}

@property (readonly) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(id)initWithViewControllerProvider:(id)arg1 ;
-(UIViewController *)viewController;
@end
