/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TROperationHandler.h>

@class NSString;

@interface TRSetupConfigurationOperationHandler : NSObject <TROperationHandler> {

	/*^block*/id _configurationHandler;

}

@property (nonatomic,copy) id configurationHandler;                 //@synthesize configurationHandler=_configurationHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerMessageHandlersForSession:(id)arg1 ;
-(void)_handleConfigurationRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(id)initWithConfigurationHandler:(/*^block*/id)arg1 ;
-(id)configurationHandler;
-(void)setConfigurationHandler:(id)arg1 ;
@end
