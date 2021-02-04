/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSApplication.h>
#import <libobjc.A.dylib/SKUIJSApplication.h>

@protocol SKUIJSApplication <JSExport>
@property (nonatomic,readonly) BOOL pageRenderMetricsEnabled; 
@property (readonly) BOOL isRunningTests; 
@required
-(BOOL)pageRenderMetricsEnabled;
-(void)launchFailed;
-(void)launchComplete:(id)arg1;
-(void)sendDocumentMessage:(id)arg1 :(id)arg2 :(id)arg3;
-(BOOL)isRunningTests;

@end


@class SKUIApplicationController;

@interface SKUIJSApplication : IKJSApplication <SKUIJSApplication> {

	SKUIApplicationController* _applicationController;

}

@property (nonatomic,__weak,readonly) SKUIApplicationController * applicationController;              //@synthesize applicationController=_applicationController - In the implementation block
@property (nonatomic,readonly) BOOL pageRenderMetricsEnabled; 
@property (readonly) BOOL isRunningTests; 
-(SKUIApplicationController *)applicationController;
-(BOOL)pageRenderMetricsEnabled;
-(void)launchFailed;
-(void)launchComplete:(id)arg1 ;
-(void)sendDocumentMessage:(id)arg1 :(id)arg2 :(id)arg3 ;
-(BOOL)isRunningTests;
-(id)initWithAppContext:(id)arg1 applicationController:(id)arg2 ;
@end
