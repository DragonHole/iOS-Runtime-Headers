/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreTelephony/CoreTelephony-Structs.h>
@class NSString;

@interface CTCall : NSObject {

	NSString* _callState;
	NSString* _callID;

}

@property (nonatomic,copy) NSString * callState;              //@synthesize callState=_callState - In the implementation block
@property (nonatomic,copy) NSString * callID;                 //@synthesize callID=_callID - In the implementation block
+(id)callForCXCall:(id)arg1 ;
+(id)callForCTCallRef:(CTCallRef)arg1 ;
-(void)setCallState:(NSString *)arg1 ;
-(void)setCallID:(NSString *)arg1 ;
-(NSString *)callID;
-(NSString *)callState;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

