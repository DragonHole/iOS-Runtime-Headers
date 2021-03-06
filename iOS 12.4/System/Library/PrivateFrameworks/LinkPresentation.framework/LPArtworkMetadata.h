/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSDictionary;

@interface LPArtworkMetadata : NSObject <NSSecureCoding, NSCopying> {

	unsigned _version;
	NSURL* _URL;
	NSDictionary* _colors;

}

@property (nonatomic,readonly) unsigned version;               //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSURL * URL;                        //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSDictionary * colors;              //@synthesize colors=_colors - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setColors:(NSDictionary *)arg1 ;
-(unsigned)version;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSDictionary *)colors;
@end

