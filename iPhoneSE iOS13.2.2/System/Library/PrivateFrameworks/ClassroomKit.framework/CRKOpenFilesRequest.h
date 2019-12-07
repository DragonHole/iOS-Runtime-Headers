/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@class NSSet, NSString, NSData;

@interface CRKOpenFilesRequest : CATTaskRequest {

	BOOL _autoAccept;
	NSSet* _fileItems;
	NSString* _senderName;
	NSData* _previewImageData;
	NSString* _sourceBundleIdentifier;

}

@property (nonatomic,copy) NSSet * fileItems;                              //@synthesize fileItems=_fileItems - In the implementation block
@property (nonatomic,copy) NSString * senderName;                          //@synthesize senderName=_senderName - In the implementation block
@property (nonatomic,copy) NSData * previewImageData;                      //@synthesize previewImageData=_previewImageData - In the implementation block
@property (assign,nonatomic) BOOL autoAccept;                              //@synthesize autoAccept=_autoAccept - In the implementation block
@property (nonatomic,copy) NSString * sourceBundleIdentifier;              //@synthesize sourceBundleIdentifier=_sourceBundleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)previewImageData;
-(void)setPreviewImageData:(NSData *)arg1 ;
-(void)setSourceBundleIdentifier:(NSString *)arg1 ;
-(NSString *)sourceBundleIdentifier;
-(NSString *)senderName;
-(void)setSenderName:(NSString *)arg1 ;
-(NSSet *)fileItems;
-(void)setFileItems:(NSSet *)arg1 ;
-(BOOL)autoAccept;
-(void)setAutoAccept:(BOOL)arg1 ;
@end
