/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface HMBAction : HMFObject <NSCopying, NSMutableCopying> {

	BOOL _shouldUpdateClients;

}

@property (assign,nonatomic) BOOL shouldUpdateClients;              //@synthesize shouldUpdateClients=_shouldUpdateClients - In the implementation block
+(id)shouldUpdateClientsAction;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setShouldUpdateClients:(BOOL)arg1 ;
-(BOOL)shouldUpdateClients;
@end

