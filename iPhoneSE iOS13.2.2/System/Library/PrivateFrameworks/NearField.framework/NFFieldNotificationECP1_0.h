/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:20 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NearField/NFFieldNotification.h>

@interface NFFieldNotificationECP1_0 : NFFieldNotification {

	BOOL _odaRequired;
	unsigned _terminalMode;
	unsigned _terminalType;

}

@property (readonly) BOOL odaRequired;                   //@synthesize odaRequired=_odaRequired - In the implementation block
@property (readonly) unsigned terminalMode;              //@synthesize terminalMode=_terminalMode - In the implementation block
@property (readonly) unsigned terminalType;              //@synthesize terminalType=_terminalType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)terminalMode;
-(unsigned)terminalType;
-(BOOL)odaRequired;
@end

