/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:02 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPTransformOperation.h>

@protocol NSFileProviderItemFlags;
@interface FPSetFlagsOperation : FPTransformOperation {

	id<NSFileProviderItemFlags> _flags;

}
-(id)fp_prettyDescription;
-(id)replicateForItems:(id)arg1 ;
-(unsigned long long)transformItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithItems:(id)arg1 flags:(id)arg2 ;
@end

