/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAPhoneCallSearchResult.h>

@class NSNumber;

@interface SAPhoneCallHistory : SAPhoneCallSearchResult

@property (nonatomic,copy) NSNumber * blocked; 
@property (nonatomic,copy) NSNumber * callCount; 
@property (nonatomic,copy) NSNumber * faceTime; 
@property (nonatomic,copy) NSNumber * faceTimeAudio; 
@property (nonatomic,copy) NSNumber * missed; 
@property (nonatomic,copy) NSNumber * outgoing; 
+(id)callHistory;
+(id)callHistoryWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setBlocked:(NSNumber *)arg1 ;
-(NSNumber *)blocked;
-(id)encodedClassName;
-(NSNumber *)faceTime;
-(void)setFaceTime:(NSNumber *)arg1 ;
-(NSNumber *)faceTimeAudio;
-(void)setFaceTimeAudio:(NSNumber *)arg1 ;
-(NSNumber *)callCount;
-(void)setCallCount:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(void)setOutgoing:(NSNumber *)arg1 ;
-(NSNumber *)outgoing;
-(NSNumber *)missed;
-(void)setMissed:(NSNumber *)arg1 ;
@end

