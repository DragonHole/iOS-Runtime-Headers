/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INImage.h>

@class NSUUID, NSData;

@interface _INDataImage : INImage {

	NSUUID* _md5HashUUID;
	NSData* _imageData;

}

@property (nonatomic,copy,readonly) NSData * imageData;              //@synthesize imageData=_imageData - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_dictionaryRepresentation;
-(BOOL)_isEligibleForProxying;
-(id)_md5HashUUID;
-(id)_copyWithSubclass:(Class)arg1 ;
-(void)_setImageData:(id)arg1 ;
-(BOOL)_requiresRetrieval;
-(void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_imageData;
-(id)_identifier;
-(NSData *)imageData;
-(void)_retrieveImageDataWithReply:(/*^block*/id)arg1 ;
-(id)initWithImageData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

