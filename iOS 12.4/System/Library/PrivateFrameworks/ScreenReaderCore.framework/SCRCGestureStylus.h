/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
#import <ScreenReaderCore/SCRCGestureFinger.h>

@interface SCRCGestureStylus : SCRCGestureFinger {

	double _altitude;
	double _azimuth;

}
-(double)altitude;
-(double)azimuth;
-(id)initWithIdentifier:(unsigned long long)arg1 location:(CGPoint)arg2 pressure:(double)arg3 altitude:(double)arg4 azimuth:(double)arg5 ;
-(unsigned long long)type;
@end

