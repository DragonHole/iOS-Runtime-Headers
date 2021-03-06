/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NFFieldNotification : NSObject <NSSecureCoding> {

	unsigned short _typeFSystemCode;
	unsigned _rfTechnology;
	unsigned long long _notificationType;

}

@property (readonly) unsigned long long notificationType;              //@synthesize notificationType=_notificationType - In the implementation block
@property (readonly) unsigned rfTechnology;                            //@synthesize rfTechnology=_rfTechnology - In the implementation block
@property (readonly) unsigned short typeFSystemCode;                   //@synthesize typeFSystemCode=_typeFSystemCode - In the implementation block
+(id)notificationWithDictionary:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(unsigned)rfTechnology;
-(unsigned long long)notificationType;
-(void)setNotificationType:(unsigned long long)arg1 ;
-(unsigned short)typeFSystemCode;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
@end

