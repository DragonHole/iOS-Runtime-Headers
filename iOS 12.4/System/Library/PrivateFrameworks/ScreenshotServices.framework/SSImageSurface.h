/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenshotServices/ScreenshotServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>

@class NSString;

@interface SSImageSurface : NSObject <BSXPCCoding> {

	IOSurfaceRef _backingSurface;
	double _scale;
	long long _orientation;

}

@property (assign,nonatomic) IOSurfaceRef backingSurface;              //@synthesize backingSurface=_backingSurface - In the implementation block
@property (assign,nonatomic) double scale;                             //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) long long orientation;                    //@synthesize orientation=_orientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IOSurfaceRef)backingSurface;
-(void)setBackingSurface:(IOSurfaceRef)arg1 ;
-(id)init;
-(void)dealloc;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(long long)orientation;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)setOrientation:(long long)arg1 ;
@end

