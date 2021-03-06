/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PPTopic, PPSource, NSString, PPTopicMetadata;

@interface PPTopicRecord : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	PPTopic* _topic;
	PPSource* _source;
	unsigned long long _algorithm;
	double _initialScore;
	double _decayRate;
	BOOL _isLocal;
	NSString* _extractionOsBuild;
	unsigned long long _extractionAssetVersion;
	PPTopicMetadata* _metadata;
	char _bucketizedSentimentScore;

}

@property (nonatomic,readonly) PPTopic * topic;                                        //@synthesize topic=_topic - In the implementation block
@property (nonatomic,readonly) PPSource * source;                                      //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) unsigned long long algorithm;                           //@synthesize algorithm=_algorithm - In the implementation block
@property (nonatomic,readonly) double initialScore;                                    //@synthesize initialScore=_initialScore - In the implementation block
@property (nonatomic,readonly) double decayRate;                                       //@synthesize decayRate=_decayRate - In the implementation block
@property (nonatomic,readonly) BOOL isLocal;                                           //@synthesize isLocal=_isLocal - In the implementation block
@property (nonatomic,readonly) NSString * extractionOsBuild;                           //@synthesize extractionOsBuild=_extractionOsBuild - In the implementation block
@property (nonatomic,readonly) unsigned long long extractionAssetVersion;              //@synthesize extractionAssetVersion=_extractionAssetVersion - In the implementation block
@property (nonatomic,readonly) double sentimentScore; 
@property (nonatomic,readonly) PPTopicMetadata * metadata;                             //@synthesize metadata=_metadata - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)describeAlgorithm:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PPSource *)source;
-(PPTopicMetadata *)metadata;
-(unsigned long long)algorithm;
-(double)decayRate;
-(double)sentimentScore;
-(PPTopic *)topic;
-(BOOL)isLocal;
-(double)initialScore;
-(unsigned long long)extractionAssetVersion;
-(NSString *)extractionOsBuild;
-(BOOL)isEqualToTopicRecord:(id)arg1 ;
@end

