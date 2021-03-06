/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMapTable;

@interface MPCContentItemIdentifierCollection : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSMapTable* _identifierTypeToIdentifier;
	unsigned long long _itemType;

}

@property (nonatomic,readonly) unsigned long long identifierCount; 
@property (nonatomic,readonly) unsigned long long itemType;                     //@synthesize itemType=_itemType - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)itemType;
-(void)_setIdentifier:(id)arg1 forIdentifierType:(unsigned long long)arg2 ;
-(id)initWithItemType:(unsigned long long)arg1 ;
-(id)identifierForIdentifierType:(unsigned long long)arg1 ;
-(void)enumerateIdentifiersUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)identifierCount;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)_copyWithZone:(NSZone*)arg1 class:(Class)arg2 ;
@end

