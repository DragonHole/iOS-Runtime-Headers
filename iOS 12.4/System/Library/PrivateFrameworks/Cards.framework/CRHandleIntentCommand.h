/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:48 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Cards/Cards-Structs.h>
#import <Cards/CRBasicPayloadCommand.h>

@class INIntent;

@interface CRHandleIntentCommand : CRBasicPayloadCommand {

	INIntent* _intent;

}

@property (nonatomic,copy) INIntent * intent;              //@synthesize intent=_intent - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(INIntent *)intent;
-(void)setIntent:(INIntent *)arg1 ;
-(id)payload;
@end
