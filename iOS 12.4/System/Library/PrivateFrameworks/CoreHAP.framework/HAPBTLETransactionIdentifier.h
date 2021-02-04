/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@interface HAPBTLETransactionIdentifier : HMFObject {

	unsigned char _unsignedCharValue;

}

@property (nonatomic,readonly) unsigned char unsignedCharValue;              //@synthesize unsignedCharValue=_unsignedCharValue - In the implementation block
+(unsigned char)generateRequestIdentifier;
-(id)initWithUnsignedCharValue:(unsigned char)arg1 ;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(unsigned char)unsignedCharValue;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)shortDescription;
@end
