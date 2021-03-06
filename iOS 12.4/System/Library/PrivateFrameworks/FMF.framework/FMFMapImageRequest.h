/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLLocation, NSString;

@interface FMFMapImageRequest : NSObject <NSSecureCoding> {

	BOOL _cachingEnabled;
	CLLocation* _location;
	double _altitude;
	double _pitch;
	double _width;
	double _height;
	long long _priority;

}

@property (nonatomic,retain) CLLocation * location;              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) double altitude;                    //@synthesize altitude=_altitude - In the implementation block
@property (nonatomic,readonly) NSString * key; 
@property (assign,nonatomic) double pitch;                       //@synthesize pitch=_pitch - In the implementation block
@property (assign,nonatomic) double width;                       //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) double height;                      //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) BOOL cachingEnabled;                //@synthesize cachingEnabled=_cachingEnabled - In the implementation block
@property (assign,nonatomic) long long priority;                 //@synthesize priority=_priority - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setAltitude:(double)arg1 ;
-(double)altitude;
-(void)setPitch:(double)arg1 ;
-(double)pitch;
-(id)initWithLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 width:(double)arg4 height:(double)arg5 andCachingEnabled:(BOOL)arg6 ;
-(BOOL)cachingEnabled;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPriority:(long long)arg1 ;
-(long long)priority;
-(double)width;
-(NSString *)key;
-(void)setWidth:(double)arg1 ;
-(void)setHeight:(double)arg1 ;
-(double)height;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setCachingEnabled:(BOOL)arg1 ;
@end

