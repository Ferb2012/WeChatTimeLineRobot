/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class SimpleImgInfo, FavSightView, UIImageView;
@protocol FavSightViewDelegate;

@interface MMFullScreenItemView : XXUnknownSuperclass {
	FavSightView* sightView;
	UIImageView* imageView;
	BOOL _isReady;
	SimpleImgInfo* _imgInfo;
	id<FavSightViewDelegate> _delegate;
}
@property(assign, nonatomic) __weak id<FavSightViewDelegate> delegate;
@property(assign, nonatomic) BOOL isReady;
@property(retain, nonatomic) SimpleImgInfo* imgInfo;
-(void).cxx_destruct;
-(void)restartDownload;
-(void)onExitFullScreen;
-(void)updateImage:(id)image;
-(void)setSightDownFail;
-(void)setSightDownFinsh;
-(void)setSightFinishedLength:(long)length TotalLength:(long)length2;
-(void)releaseContentView;
-(void)onClick;
-(void)onHide;
-(void)onShow;
-(void)initContentView:(id)view;
-(void)setFrame:(CGRect)frame;
@end
