/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookThumbnailing/QuickLookThumbnailing-Structs.h>
#import <QuickLookThumbnailing/QLCacheFileIdentifier.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface QLCacheBasicFileIdentifier : QLCacheFileIdentifier <NSSecureCoding> {

	unsigned long long _fileId;

}

@property (readonly) unsigned long long fileId;              //@synthesize fileId=_fileId - In the implementation block
+(Class)versionedFileIdentifierClass;
+(BOOL)supportsSecureCoding;
-(id)initWithFileId:(unsigned long long)arg1 ;
-(unsigned long long)fileId;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithFileURL:(id)arg1 ;
@end

