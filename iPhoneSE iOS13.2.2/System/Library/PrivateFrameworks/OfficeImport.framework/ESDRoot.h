/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:54 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/ESDObject.h>

@class NSMutableArray;

@interface ESDRoot : ESDObject {

	NSMutableArray* mChildren;

}
-(id)init;
-(void)addChild:(id)arg1 ;
-(unsigned long long)childCount;
-(id)childAt:(unsigned long long)arg1 ;
-(id)initWithEshObject:(EshObject*)arg1 ;
-(void)writeToWriter:(OcWriterRef)arg1 ;
-(EshRoot*)eshRoot;
-(id)initFromReader:(OcReader*)arg1 ;
-(id)pbReferenceWithID:(unsigned)arg1 ;
-(id)initWithPbState:(id)arg1 ;
@end
