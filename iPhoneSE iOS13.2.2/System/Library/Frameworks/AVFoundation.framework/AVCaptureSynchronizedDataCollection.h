/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class AVCaptureSynchronizedDataCollectionInternal;

@interface AVCaptureSynchronizedDataCollection : NSObject <NSFastEnumeration> {

	AVCaptureSynchronizedDataCollectionInternal* _internal;

}

@property (readonly) unsigned long long count; 
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_AV9*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)_shortStringForDataOutput:(id)arg1 syncedData:(id)arg2 ;
-(id)_shortStringForDataDroppedReason:(long long)arg1 ;
-(id)synchronizedDataForCaptureOutput:(id)arg1 ;
-(id)_initWithPossibleDataOutputs:(id)arg1 ;
-(void)_setSynchronizedData:(id)arg1 forCaptureOutput:(id)arg2 ;
@end

