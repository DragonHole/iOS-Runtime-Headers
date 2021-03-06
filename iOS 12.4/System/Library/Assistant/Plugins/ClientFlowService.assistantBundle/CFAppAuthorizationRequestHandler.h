/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAIntentGroupAppAuthorizationStatusRequest.h>
#import <libobjc.A.dylib/AFServiceCommand.h>

@class NSString;

@interface CFAppAuthorizationRequestHandler : SAIntentGroupAppAuthorizationStatusRequest <AFServiceCommand>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleAppAuthorizationStatusRequestWithCompletion:(/*^block*/id)arg1 ;
-(id)authorizationStatusResponseWithAuthorizationStatusMap:(id)arg1 ;
-(id)authorizationStatusForAppWithBundleId:(id)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 serviceHelper:(id)arg2 ;
@end

