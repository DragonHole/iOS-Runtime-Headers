/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFRecordDescriptor.h>

@class WFFileRepresentation, NSString;

@interface WFFileRecordDescriptor : WFRecordDescriptor {

	WFFileRepresentation* _file;
	NSString* _name;
	NSString* _sourceAppIdentifier;

}

@property (nonatomic,readonly) WFFileRepresentation * file;                 //@synthesize file=_file - In the implementation block
@property (nonatomic,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * sourceAppIdentifier;              //@synthesize sourceAppIdentifier=_sourceAppIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(WFFileRepresentation *)file;
-(NSString *)sourceAppIdentifier;
-(id)initWithFile:(id)arg1 name:(id)arg2 recordClass:(Class)arg3 ;
-(id)initWithFile:(id)arg1 name:(id)arg2 recordClass:(Class)arg3 sourceAppIdentifier:(id)arg4 ;
@end

