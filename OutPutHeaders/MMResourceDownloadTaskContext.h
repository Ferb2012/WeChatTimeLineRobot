/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class MMResDownloadInfo, MMResInfo, NSString, MMResDownloadUrlInfo;

@interface MMResourceDownloadTaskContext : XXUnknownSuperclass {
	unsigned long _resType;
	unsigned long _resSubType;
	NSString* _mainDocumentUrl;
	NSString* _configUrl;
	NSString* _appId;
	unsigned long _expiredTime;
	unsigned long _priority;
	NSString* _domain;
	NSString* _packageId;
	MMResDownloadUrlInfo* _downloadUrlInfo;
	MMResDownloadInfo* _downloadInfo;
	MMResInfo* _oldResInfo;
}
@property(retain, nonatomic) MMResInfo* oldResInfo;
@property(retain, nonatomic) MMResDownloadInfo* downloadInfo;
@property(retain, nonatomic) MMResDownloadUrlInfo* downloadUrlInfo;
@property(retain, nonatomic) NSString* packageId;
@property(retain, nonatomic) NSString* domain;
@property(assign, nonatomic) unsigned long priority;
@property(assign, nonatomic) unsigned long expiredTime;
@property(retain, nonatomic) NSString* appId;
@property(retain, nonatomic) NSString* configUrl;
@property(retain, nonatomic) NSString* mainDocumentUrl;
@property(assign, nonatomic) unsigned long resSubType;
@property(assign, nonatomic) unsigned long resType;
-(void).cxx_destruct;
-(void)dealloc;
-(id)init;
@end
