/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CKOperationMMCSRequestOptions : NSObject <NSSecureCoding> {

	BOOL _resumableContainerLimpMode;
	BOOL _chunkingLibraryCorruptionMode;

}

@property (assign,nonatomic) BOOL resumableContainerLimpMode;                 //@synthesize resumableContainerLimpMode=_resumableContainerLimpMode - In the implementation block
@property (assign,nonatomic) BOOL chunkingLibraryCorruptionMode;              //@synthesize chunkingLibraryCorruptionMode=_chunkingLibraryCorruptionMode - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)resumableContainerLimpMode;
-(void)setResumableContainerLimpMode:(BOOL)arg1 ;
-(BOOL)chunkingLibraryCorruptionMode;
-(void)setChunkingLibraryCorruptionMode:(BOOL)arg1 ;
@end
