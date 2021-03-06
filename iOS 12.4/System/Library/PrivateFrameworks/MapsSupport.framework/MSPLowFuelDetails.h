/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSData;

@interface MSPLowFuelDetails : NSObject <NSSecureCoding> {

	NSString* _title;
	NSString* _subtitle;
	NSNumber* _engineType;
	NSData* _iconData;
	NSData* _iconDataCarPlay;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                     //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSNumber * engineType;                   //@synthesize engineType=_engineType - In the implementation block
@property (nonatomic,retain) NSData * iconData;                     //@synthesize iconData=_iconData - In the implementation block
@property (nonatomic,retain) NSData * iconDataCarPlay;              //@synthesize iconDataCarPlay=_iconDataCarPlay - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setIconData:(NSData *)arg1 ;
-(NSNumber *)engineType;
-(void)setEngineType:(NSNumber *)arg1 ;
-(NSData *)iconData;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 engineType:(id)arg3 ;
-(NSData *)iconDataCarPlay;
-(void)setIconDataCarPlay:(NSData *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
@end

