/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:06 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTService.h>

@interface RTBluetoothManager : RTService
+(BOOL)supportsNotificationName:(id)arg1 ;
+(id)carKitConnectionStateToString:(long long)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)_fetchCarKitConnectedStateWithHandler:(/*^block*/id)arg1 ;
-(void)fetchCarKitConnectedStateWithHandler:(/*^block*/id)arg1 ;
-(BOOL)interestedInDeviceType:(id)arg1 ;
@end
