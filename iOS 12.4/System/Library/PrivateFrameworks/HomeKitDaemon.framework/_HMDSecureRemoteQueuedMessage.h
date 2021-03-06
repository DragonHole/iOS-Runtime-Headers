/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFObject.h>

@class HMDRemoteMessage, HMFTimer, NSString, NSArray;

@interface _HMDSecureRemoteQueuedMessage : HMFObject <HMFObject> {

	HMDRemoteMessage* _message;
	HMFTimer* _timer;

}

@property (nonatomic,readonly) HMDRemoteMessage * message;                        //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) HMFTimer * timer;                                  //@synthesize timer=_timer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
-(id)initWithMessage:(id)arg1 ;
-(NSString *)propertyDescription;
-(id)init;
-(HMDRemoteMessage *)message;
-(NSString *)shortDescription;
-(HMFTimer *)timer;
@end

