/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariCore/SafariCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WBSMemoryFootprintMallocZone : NSObject <NSSecureCoding> {

	unsigned long long _addr;
	malloc_statistics_t _statistics;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long sizeInUse; 
@property (nonatomic,readonly) unsigned long long sizeAllocated; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithMallocZone:(malloc_zone_t*)arg1 ;
-(unsigned long long)sizeInUse;
-(unsigned long long)sizeAllocated;
@end

