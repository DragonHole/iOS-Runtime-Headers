/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <CoreFoundation/NSData.h>

@interface FigIOSurfaceData : NSData {

	IOSurfaceRef _surface;
	unsigned long long _length;
	const void* _bytes;

}
+(id)dataWithIOSurface:(IOSurfaceRef)arg1 ;
+(id)dataWithIOSurface:(IOSurfaceRef)arg1 length:(unsigned long long)arg2 ;
+(void)initialize;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 length:(unsigned long long)arg2 ;
-(unsigned long long)length;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const void*)bytes;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 ;
@end

