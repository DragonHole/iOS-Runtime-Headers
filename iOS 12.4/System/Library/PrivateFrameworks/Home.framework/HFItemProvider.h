/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface HFItemProvider : NSObject <NSCopying> {

	NSSet* _clientInvalidationReasons;

}

@property (nonatomic,readonly) NSSet * items; 
@property (nonatomic,retain) NSSet * clientInvalidationReasons;              //@synthesize clientInvalidationReasons=_clientInvalidationReasons - In the implementation block
+(BOOL)prefersNonBlockingReloads;
-(id)reloadItemsWithObjects:(id)arg1 keyAdaptor:(/*^block*/id)arg2 itemAdaptor:(/*^block*/id)arg3 filter:(/*^block*/id)arg4 itemMap:(/*^block*/id)arg5 ;
-(NSSet *)clientInvalidationReasons;
-(void)setClientInvalidationReasons:(NSSet *)arg1 ;
-(id)reloadItemsWithHomeKitObjects:(id)arg1 filter:(/*^block*/id)arg2 itemMap:(/*^block*/id)arg3 ;
-(id)invalidationReasons;
-(id)reloadItems;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)items;
@end
