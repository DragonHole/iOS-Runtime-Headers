/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeyboardServices/KeyboardServices-Structs.h>
#import <KeyboardServices/_KSFileEntry.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableDictionary, NSArray;

@interface _KSFileDirectory : _KSFileEntry <NSSecureCoding, NSFastEnumeration> {

	NSMutableDictionary* _contents;

}

@property (nonatomic,retain,readonly) NSArray * contents; 
+(BOOL)supportsSecureCoding;
-(void)consistencyCheck;
-(void)performOnEverything:(/*^block*/id)arg1 ;
-(id)initWithDirectory:(id)arg1 captureContents:(BOOL)arg2 storeRoot:(BOOL)arg3 ;
-(id)findEntryWithComparison:(/*^block*/id)arg1 recursively:(BOOL)arg2 ;
-(void)restoreToPath:(id)arg1 ;
-(void)removeEntryWithName:(id)arg1 ;
-(id)entryForName:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_KS0*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSArray *)contents;
-(id)initWithName:(id)arg1 ;
-(void)addEntry:(id)arg1 ;
@end

