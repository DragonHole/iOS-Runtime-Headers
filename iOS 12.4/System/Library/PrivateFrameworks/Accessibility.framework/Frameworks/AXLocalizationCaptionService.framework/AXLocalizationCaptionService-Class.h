/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXLocalizationCaptionService.framework/AXLocalizationCaptionService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXLocalizationCaptionService/AXUIClientDelegate.h>

@class AXUIClient, NSString;

@interface AXLocalizationCaptionService : NSObject <AXUIClientDelegate> {

	AXUIClient* _client;

}

@property (nonatomic,retain) AXUIClient * client;                   //@synthesize client=_client - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)service;
+(void)startService;
+(void)stopService;
+(void)_sendMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1 ;
-(AXUIClient *)client;
-(void)setClient:(AXUIClient *)arg1 ;
-(id)_clientIdentifier;
@end

