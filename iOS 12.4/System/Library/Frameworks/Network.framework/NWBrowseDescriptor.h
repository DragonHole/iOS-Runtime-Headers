/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <libobjc.A.dylib/NWPrettyDescription.h>

@protocol OS_nw_browse_descriptor;
@class NSObject, NSString, NWInterface;

@interface NWBrowseDescriptor : NSObject <NWPrettyDescription> {

	NSObject*<OS_nw_browse_descriptor> _internalDescriptor;

}

@property (nonatomic,retain) NSObject*<OS_nw_browse_descriptor> internalDescriptor;              //@synthesize internalDescriptor=_internalDescriptor - In the implementation block
@property (nonatomic,copy,readonly) NSString * privateDescription; 
@property (nonatomic,retain) NWInterface * interface; 
+(unsigned)descriptorType;
+(BOOL)supportsBrowseCallback;
+(Class)copyClassForDescriptorType:(int)arg1 ;
+(id)descriptorWithInternalDescriptor:(id)arg1 ;
+(id)descriptorWithProtocolBufferData:(id)arg1 ;
-(id)initWithDescriptor:(id)arg1 ;
-(NSString *)privateDescription;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(id)initWithEncodedData:(id)arg1 ;
-(id)createProtocolBufferObject;
-(void)browseWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_nw_browse_descriptor>)internalDescriptor;
-(void)setInternalDescriptor:(NSObject*<OS_nw_browse_descriptor>)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)encodedData;
-(NWInterface *)interface;
-(void)setInterface:(NWInterface *)arg1 ;
@end

