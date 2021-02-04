/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:09 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface CPAlertAction : NSObject <NSSecureCoding> {

	NSString* _title;
	unsigned long long _style;
	/*^block*/id _handler;
	NSUUID* _identifier;

}

@property (nonatomic,retain) NSUUID * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long style;              //@synthesize style=_style - In the implementation block
@property (nonatomic,copy,readonly) id handler;                       //@synthesize handler=_handler - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithTitle:(id)arg1 style:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(NSUUID *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(unsigned long long)style;
-(id)handler;
-(void)setIdentifier:(NSUUID *)arg1 ;
@end
