/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNCapabilities.h>

@protocol CNCapabilities <NSObject>
@property (nonatomic,readonly) BOOL areTelephonyCallsSupported; 
@property (nonatomic,readonly) BOOL isiMessageSupported; 
@property (nonatomic,readonly) BOOL isFaceTimeVideoSupported; 
@property (nonatomic,readonly) BOOL isFaceTimeAudioSupported; 
@property (nonatomic,readonly) BOOL isPaySupported; 
@required
-(BOOL)areTelephonyCallsSupported;
-(BOOL)isFaceTimeVideoSupported;
-(BOOL)isPaySupported;
-(BOOL)isiMessageSupported;
-(BOOL)isFaceTimeAudioSupported;

@end


@class NSString;

@interface CNCapabilities : NSObject <CNCapabilities>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL areTelephonyCallsSupported; 
@property (nonatomic,readonly) BOOL isiMessageSupported; 
@property (nonatomic,readonly) BOOL isFaceTimeVideoSupported; 
@property (nonatomic,readonly) BOOL isFaceTimeAudioSupported; 
@property (nonatomic,readonly) BOOL isPaySupported; 
-(BOOL)areTelephonyCallsSupported;
-(BOOL)isFaceTimeVideoSupported;
-(BOOL)isPaySupported;
-(BOOL)isiMessageSupported;
-(BOOL)isFaceTimeAudioSupported;
@end
