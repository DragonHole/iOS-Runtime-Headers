/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSTimeZone.h>

@interface __NSTimeZone : NSTimeZone {

	CFStringRef _name;
	CFDataRef _data;
	void* _ucal;
	opaque_pthread_mutex_t _lock;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)dealloc;
-(id)name;
-(double)daylightSavingTimeOffsetForDate:(id)arg1 ;
-(id)data;
-(long long)secondsFromGMTForDate:(id)arg1 ;
-(id)abbreviationForDate:(id)arg1 ;
-(BOOL)isDaylightSavingTimeForDate:(id)arg1 ;
-(id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1 ;
-(id)localizedName:(long long)arg1 locale:(id)arg2 ;
@end

