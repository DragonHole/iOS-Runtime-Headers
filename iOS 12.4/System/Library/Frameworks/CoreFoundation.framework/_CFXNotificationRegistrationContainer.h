/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/_CFXNotificationRegistrationBase.h>

@interface _CFXNotificationRegistrationContainer : _CFXNotificationRegistrationBase {

	SCD_Struct_CF6* _children;

}
+(Class)childClass;
-(id)initWithParent:(id)arg1 childKeyCallbacks:(const SCD_Struct_CF2*)arg2 ;
-(void)resetChildren;
-(BOOL)enumerate:(/*^block*/id)arg1 ;
-(id)initWithParent:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)removeChild:(id)arg1 ;
-(void)addChild:(id)arg1 ;
@end

