/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <SafariShared/WBSCyclerBookmarkRepresentation.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray;

@interface WBSCyclerBookmarkListRepresentation : WBSCyclerBookmarkRepresentation <NSFastEnumeration> {

	NSMutableArray* _children;

}

@property (nonatomic,readonly) unsigned long long numberOfChildren; 
+(BOOL)supportsSecureCoding;
-(unsigned long long)numberOfChildren;
-(id)initWithTitle:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(id)pairsOfBookmarksWithDifferingExtraAttributesComparedTo:(id)arg1 ;
-(BOOL)_tryToDeleteDescendant:(id)arg1 ;
-(BOOL)containsChild:(id)arg1 ;
-(BOOL)containsDescendant:(id)arg1 ;
-(id)descendantWithUniqueIdentifier:(id)arg1 ;
-(id)allDescendantsPassingTest:(/*^block*/id)arg1 ;
-(id)randomDescendantPassingTest:(/*^block*/id)arg1 ;
-(void)deleteChild:(id)arg1 ;
-(void)deleteDescendant:(id)arg1 ;
-(void)deleteAllChildren;
-(id)randomDescendant;
-(id)randomListDescendant;
-(void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)childAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEquivalent:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_WB13*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addChild:(id)arg1 ;
@end

