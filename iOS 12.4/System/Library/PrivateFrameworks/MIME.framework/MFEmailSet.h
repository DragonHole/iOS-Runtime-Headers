/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MIME-Structs.h>
#import <EmailAddressing/EAEmailAddressSet.h>

@interface MFEmailSet : EAEmailAddressSet {

	CFSetRef _set;

}
+(id)set;
-(void)_setupSetWithCapacity:(unsigned long long)arg1 ;
-(id)_generateAllObjectsFromSelector:(SEL)arg1 ;
-(void)setSet:(id)arg1 ;
-(id)allCommentedAddresses;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_MF2*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)addObject:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)allObjects;
-(void)removeAllObjects;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeObject:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(id)objectEnumerator;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)unionSet:(id)arg1 ;
-(BOOL)intersectsSet:(id)arg1 ;
-(void)intersectSet:(id)arg1 ;
-(BOOL)isEqualToSet:(id)arg1 ;
-(id)initWithSet:(id)arg1 ;
-(BOOL)isSubsetOfSet:(id)arg1 ;
-(id)member:(id)arg1 ;
@end
