/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface CNUnfairLock : NSObject <NSLocking> {

	os_unfair_lock_s _os_unfair_lock;

}
-(id)init;
-(id)description;
-(void)lock;
-(void)unlock;
-(BOOL)tryLock;
-(void)assertCurrentThreadIsOwner;
-(void)assertCurrentThreadIsNotOwner;
@end

