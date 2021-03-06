/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSNumber;

@interface HAPMetadataProperty : HMFObject {

	NSString* _propertyDescription;
	NSString* _propertyType;
	NSNumber* _bitPosition;

}

@property (nonatomic,retain) NSString * propertyType;              //@synthesize propertyType=_propertyType - In the implementation block
@property (nonatomic,retain) NSNumber * bitPosition;               //@synthesize bitPosition=_bitPosition - In the implementation block
@property (copy) NSString * propertyDescription;                   //@synthesize propertyDescription=_propertyDescription - In the implementation block
+(id)init:(id)arg1 withDictionary:(id)arg2 ;
-(void)dump;
-(void)setPropertyDescription:(NSString *)arg1 ;
-(NSString *)propertyType;
-(id)generateDictionary;
-(id)initWithType:(id)arg1 bitPosition:(id)arg2 description:(id)arg3 ;
-(NSNumber *)bitPosition;
-(void)setBitPosition:(NSNumber *)arg1 ;
-(NSString *)propertyDescription;
-(id)description;
-(void)setPropertyType:(NSString *)arg1 ;
@end

