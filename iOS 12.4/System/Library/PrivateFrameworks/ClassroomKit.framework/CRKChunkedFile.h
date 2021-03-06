/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CRKChunkedFile : NSObject {

	int mFileDescriptor;

}
+(long long)preferredChunkSizeForFileDescriptor:(int)arg1 ;
+(void)assertFileDescriptorIsValid:(int)arg1 ;
-(long long)readNextChunkIntoBuffer:(id)arg1 error:(id*)arg2 ;
-(id)initWithFileDescriptor:(int)arg1 ;
-(id)init;
@end

